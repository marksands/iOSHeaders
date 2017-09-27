//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSRecord.h"

@class ABSAddressBook, CNAccount, CNMutableContainer, NSString;

@interface ABSSource : NSObject <ABSRecord>
{
    unsigned int _type;
    int _revertedRecordID;
    ABSAddressBook *_addressBook;
    ABSSource *_source;
    CNAccount *_account;
    CNMutableContainer *_cnImpl;
}

@property(nonatomic) int revertedRecordID; // @synthesize revertedRecordID=_revertedRecordID;
@property(retain, nonatomic) CNMutableContainer *cnImpl; // @synthesize cnImpl=_cnImpl;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak ABSSource *source; // @synthesize source=_source;
@property(nonatomic) __weak ABSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (void)updateAllValuesWithValuesFromContainer:(id)arg1;
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;
- (const void *)copyValueForProperty:(int)arg1;
- (id)getAccount;
@property(readonly, nonatomic) NSString *compositeName;
- (unsigned int)getType;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (id)initWithMutableContainer:(id)arg1;
- (unsigned long long)_cfTypeID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

