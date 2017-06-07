//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSMutableSet *_urlsToExamine;
    NSMutableSet *_principalURLs;
    NSURL *_urlBeingExamined;
    _Bool _authError;
}

@property(readonly, nonatomic) _Bool didReceiveAuthenticationError; // @synthesize didReceiveAuthenticationError=_authError;
@property(retain, nonatomic) NSURL *urlBeingExamined; // @synthesize urlBeingExamined=_urlBeingExamined;
@property(retain, nonatomic) NSMutableSet *principalURLs; // @synthesize principalURLs=_principalURLs;
@property(retain, nonatomic) NSMutableSet *urlsToExamine; // @synthesize urlsToExamine=_urlsToExamine;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_fetchNextURL;
- (void)_finishWithError:(id)arg1;
@property(readonly, nonatomic) NSSet *resultPrincipalURLs;
- (id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

