//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import "CNiOSGroupPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsInGroupPredicate : CNPredicate <CNiOSGroupPredicate>
{
    NSString *_parentGroupIdentifier;
}

@property(readonly, copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
- (void).cxx_destruct;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;
- (id)initWithParentGroupIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

