//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFSessionDelegate.h"

@class CNContact, CNFuture, CNUIIDSAvailabilityProvider, FMFSession, NSObject<CNShareLocationProtocol>, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CNShareLocationController : NSObject <FMFSessionDelegate>
{
    CNContact *_contact;
    NSObject<CNShareLocationProtocol> *_shareLocationDelegate;
    FMFSession *_fmfSession;
    NSSet *_handles;
    CNUIIDSAvailabilityProvider *_idsAvailabilityProvider;
    id <CNCancelable> _bestPropertyCancelable;
    CNFuture *_bestPropertyFuture;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (id)fmfHandleFromContactProperty:(id)arg1;
+ (id)fmfHandlesFromContact:(id)arg1;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNFuture *bestPropertyFuture; // @synthesize bestPropertyFuture=_bestPropertyFuture;
@property(retain, nonatomic) id <CNCancelable> bestPropertyCancelable; // @synthesize bestPropertyCancelable=_bestPropertyCancelable;
@property(readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // @synthesize idsAvailabilityProvider=_idsAvailabilityProvider;
@property(retain, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property(nonatomic) __weak NSObject<CNShareLocationProtocol> *shareLocationDelegate; // @synthesize shareLocationDelegate=_shareLocationDelegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)notifySharingStatusDidChange;
- (id)callerIDFuture;
- (id)callerID:(id *)arg1;
- (void)initiateIDSRequest;
- (id)endOfDayDate;
- (void)stopSharingLocation;
- (void)shareLocationUntilEndDate:(id)arg1;
- (void)perform:(id)arg1;
@property(readonly, nonatomic) _Bool isSharing;
@property(readonly, nonatomic) _Bool canShare;
- (id)initWithIDSAvailabilityProvider:(id)arg1 fmfSession:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithIDSAvailabilityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

