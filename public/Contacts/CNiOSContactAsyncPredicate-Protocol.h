//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNiOSContactPredicate.h"

@class CNContactsEnvironment, CNiOSPersonFetchRequest;

@protocol CNiOSContactAsyncPredicate <CNiOSContactPredicate>
- (id <CNCancelable>)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg3 completion:(void (^)(NSError *))arg4 environment:(CNContactsEnvironment *)arg5;
@end

