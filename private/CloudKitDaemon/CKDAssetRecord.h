//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKRecordID, NSArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CKDAssetRecord : NSObject
{
    NSString *_recordType;
    CKRecordID *_recordID;
    NSMutableDictionary *_itemsByRecordKey;
    NSMutableDictionary *_sectionItemsByRecordKey;
    NSNumber *_sizeUpperBoundNumber;
}

@property(retain, nonatomic) NSNumber *sizeUpperBoundNumber; // @synthesize sizeUpperBoundNumber=_sizeUpperBoundNumber;
@property(retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey; // @synthesize sectionItemsByRecordKey=_sectionItemsByRecordKey;
@property(retain, nonatomic) NSMutableDictionary *itemsByRecordKey; // @synthesize itemsByRecordKey=_itemsByRecordKey;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (_Bool)isPackageSectionRecord;
- (id)firstMMCSSectionItemError;
- (id)firstMMCSItemError;
- (id)allMMCSAndSectionItemsWithRecordKey:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allRecordKeys;
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int sizeUpperBound;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addMMCSItem:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;

@end

