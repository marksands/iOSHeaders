//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPStoreSocialRequestOperationDataSource.h"

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>
{
    long long _action;
    MPModelSocialPerson *_person;
}

@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)queryItems;
- (long long)httpMethod;
- (long long)httpBodyType;
- (id)httpBody;
- (id)fallbackBagKeys;
- (id)bagKey;
- (id)_actionTypeString;
- (id)initWithAction:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

