//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDataMapper.h"

@class CNContactsEnvironment, CNDonationStore, NSString;

__attribute__((visibility("hidden")))
@interface CNDonationMapper : NSObject <CNDataMapper>
{
    CNContactsEnvironment *_environment;
    CNDonationStore *_donationStore;
}

+ (id)mapperIdentifier;
+ (id)log;
@property(readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)contactObservableForFetchRequest:(id)arg1;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

