//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATTaskOperationNotificationDelegate.h"
#import "CRKStudentDaemonProxyObserver.h"

@class CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, CRKStudentDaemonProxy, NSArray, NSDictionary, NSString;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate>
{
    id <CRKCourseEnrollmentControllerDelegate> mDelegate;
    CRKStudentDaemonProxy *mDaemonProxy;
    CATRemoteTaskOperation *mBrowseOperation;
    CATRemoteTaskOperation *mActiveCoursesOperation;
    CATRemoteTaskOperation *mCloudStatusSubscriptionOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    NSArray *_courses;
    NSArray *_courseInvitations;
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
    NSDictionary *_observingInstructorIdentifiersByCourseIdentifiers;
    long long _cloudEnrollmentStatus;
}

@property(nonatomic) long long cloudEnrollmentStatus; // @synthesize cloudEnrollmentStatus=_cloudEnrollmentStatus;
@property(retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers; // @synthesize observingInstructorIdentifiersByCourseIdentifiers=_observingInstructorIdentifiersByCourseIdentifiers;
@property(copy, nonatomic) NSArray *activeInstructorIdentifiers; // @synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers;
@property(copy, nonatomic) NSArray *activeCourseIdentifiers; // @synthesize activeCourseIdentifiers=_activeCourseIdentifiers;
@property(copy, nonatomic) NSArray *courseInvitations; // @synthesize courseInvitations=_courseInvitations;
@property(copy, nonatomic) NSArray *courses; // @synthesize courses=_courses;
- (void).cxx_destruct;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)cloudEnrollmentStatusDidChange:(long long)arg1;
- (void)fetchCloudEnrollmentStatusDidFinish:(id)arg1;
- (void)fetchCloudEnrollmentStatus;
- (void)screenObserversHaveChanged:(id)arg1;
- (void)fetchScreenObserversDidFinish:(id)arg1;
- (void)fetchScreenObservers;
- (void)fetchCourseInvitationsOperationDidFinish:(id)arg1;
- (void)fetchCourseInvitations;
- (void)storeCourses;
- (void)fetchStoredCourses;
- (void)fetchCoursesOperationDidFinish:(id)arg1;
- (void)fetchCourses;
- (void)fetchActiveCoursesOperationDidFinish:(id)arg1;
- (void)fetchActiveCourses;
- (void)stopLongRunningOperations;
- (void)startLongRunningOperations;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)daemonProxyDidConnect:(id)arg1;
- (id)coursesWithInstructorIdentifier:(id)arg1;
- (id)invitationWithCourseIdentifier:(id)arg1;
- (id)courseWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

