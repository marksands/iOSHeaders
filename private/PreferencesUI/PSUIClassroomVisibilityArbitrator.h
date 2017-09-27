//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKCourseEnrollmentControllerDelegate.h"

@class CRKCourseEnrollmentController, NSString;

@interface PSUIClassroomVisibilityArbitrator : NSObject <CRKCourseEnrollmentControllerDelegate>
{
    CRKCourseEnrollmentController *_enrollmentController;
    _Bool _previouslyEnrolled;
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void).cxx_destruct;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)reloadVisibilityState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

