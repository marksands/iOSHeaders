//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSSocialService.h>

@class CNContact, CNContactStore, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CLSSocialServiceContacts : CLSSocialService
{
    CNContactStore *_contactStore;
    CNContact *_meContact;
    NSMutableArray *_allContacts;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForPHIdentifiers;
    id <CLSSocialServiceContactsDelegate> _delegate;
    NSMutableDictionary *_personByFullName;
    NSMutableSet *_nonFoundFullNames;
    NSMutableDictionary *_personByHandle;
    NSMutableSet *_nonFoundHandles;
}

+ (id)defaultKeysToFetch;
@property(retain, nonatomic) NSMutableSet *nonFoundHandles; // @synthesize nonFoundHandles=_nonFoundHandles;
@property(retain, nonatomic) NSMutableDictionary *personByHandle; // @synthesize personByHandle=_personByHandle;
@property(retain, nonatomic) NSMutableSet *nonFoundFullNames; // @synthesize nonFoundFullNames=_nonFoundFullNames;
@property(retain, nonatomic) NSMutableDictionary *personByFullName; // @synthesize personByFullName=_personByFullName;
@property(nonatomic) __weak id <CLSSocialServiceContactsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateCacheForPersonWithIdentifiers:(id)arg1;
- (id)_personsMatchingPredicate:(id)arg1;
- (id)personForPersonHandle:(id)arg1;
- (void)_enumerateContactsFetchingKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(CDUnknownBlockType)arg1;
- (id)_maidenNameForPersonRecord:(id)arg1;
- (id)_nicknameForPersonRecord:(id)arg1;
- (id)_lastNameForPersonRecord:(id)arg1;
- (id)_firstNameForPersonRecord:(id)arg1;
- (id)_fullNameForPersonRecord:(id)arg1;
- (id)_fullNameWithContact:(id)arg1;
- (id)personForIdentifier:(id)arg1;
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_allPersons;
- (id)_allPersonRecords;
- (id)_mePersons;
- (id)_meRecords;
- (unsigned long long)_relationshipForContact:(id)arg1;
- (void)_addAddressesToPerson:(id)arg1 withContact:(id)arg2;
- (id)__newPersonWithContact:(id)arg1;
- (id)_personWithContactIdentifier:(id)arg1;
- (id)_personWithContact:(id)arg1 createPersonIfNeeded:(_Bool)arg2;
- (id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out _Bool *)arg2 inPhotoLibrary:(id)arg3;
- (id)_personResultsForFullName:(id)arg1;
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)mePerson;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;

@end

