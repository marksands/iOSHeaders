//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable *_notificationHandlers;
    NSOperationQueue *_accountChangeHandlerQueue;
}

+ (id)sharedNotifier;
@property(retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue; // @synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue;
@property(retain, nonatomic) NSMapTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(nonatomic) int accountChangedToken; // @synthesize accountChangedToken=_accountChangedToken;
- (void).cxx_destruct;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(CDUnknownBlockType)arg2;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

