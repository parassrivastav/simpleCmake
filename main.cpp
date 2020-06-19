// Libraries
#include <reactphysics3d/reactphysics3d.h>
#include <iostream>
//#include <cvplotter/cvplotter.h>
#include<animals/mule.h>
#include<animals/horse.h>
#include<animals/funcs.h>
// ReactPhysics3D namespace
using namespace reactphysics3d;
using namespace std;

// Main function
int main(int argc, char** argv) {

    // First you need to create the PhysicsCommon object.
    // This is a factory module that you can use to create physics
    // world and other objects. It is also responsible for
    // logging and memory management
    mule m;
    horse h;
    cout << "\nMain is running.";
    dumbFunc();
    m.displayMule();
    h.displayHorse();
    cout << endl;

    PhysicsCommon physicsCommon;

    // Create a physics world
    PhysicsWorld* world = physicsCommon.createPhysicsWorld();

    // Create a rigid body in the world
    Vector3 position(0, 0, 0);
    Quaternion orientation = Quaternion::identity();
    Transform transform(position, orientation);
    RigidBody* body = world->createRigidBody(transform);

    const decimal timeStep = 1.0f / 60.0f;

    // Step the simulation a few steps
    double clock = 0;
    for (int i=1; i <= 600; i++) {

        world->update(timeStep);
        clock += timeStep;
        // Get the updated position of the body
        const Transform& transform = body->getTransform();
        const Vector3& position = transform.getPosition();

        // Display the position of the body
        std::cout << "Body Position: (" << position.x << ", " <<
      position.y<< ", " << position.z << ") time "<< i << std::endl;
    }

    return 0;
}
