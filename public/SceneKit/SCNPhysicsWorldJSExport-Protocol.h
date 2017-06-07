//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNPhysicsBehavior, SCNPhysicsBody, SCNPhysicsShape;
@protocol SCNPhysicsContactDelegate;

@protocol SCNPhysicsWorldJSExport <JSExport>
@property(readonly, nonatomic) NSArray *allBehaviors;
@property id <SCNPhysicsContactDelegate> contactDelegate;
@property(nonatomic) double timeStep;
@property(nonatomic) double speed;
@property(nonatomic) struct SCNVector3 gravity;
- (void)updateCollisionPairs;
- (NSArray *)convexSweepTestWithShape:(SCNPhysicsShape *)arg1 fromTransform:(struct SCNMatrix4)arg2 toTransform:(struct SCNMatrix4)arg3 options:(NSDictionary *)arg4;
- (NSArray *)contactTestWithBody:(SCNPhysicsBody *)arg1 options:(NSDictionary *)arg2;
- (NSArray *)contactTestBetweenBody:(SCNPhysicsBody *)arg1 andBody:(SCNPhysicsBody *)arg2 options:(NSDictionary *)arg3;
- (NSArray *)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(NSDictionary *)arg3;
- (void)removeAllBehaviors;
- (void)removeBehavior:(SCNPhysicsBehavior *)arg1;
- (void)addBehavior:(SCNPhysicsBehavior *)arg1;
@end
