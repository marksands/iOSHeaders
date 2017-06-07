//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

@class NSMutableArray, NSString, OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString *mFormatName;
    NSString *mFormatNameStem;
    NSString *mFormatNameTag;
    int mFormatType;
    OITSUCustomFormatData *mDefaultFormatData;
    NSMutableArray *mConditionList;
}

@property(readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=mConditionList;
- (id)description;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)conditionalFormatDataForValue:(double)arg1;
@property(readonly, nonatomic) OITSUCustomFormatData *defaultFormatData;
@property(readonly, nonatomic) int formatType;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=mFormatName;
- (_Bool)isEqualWithStemNameMatching:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqual:(id)arg1 matchingFullName:(_Bool)arg2;
@property(readonly, nonatomic) NSString *formatNameTag;
@property(readonly, nonatomic) NSString *formatNameStem;
- (void)p_makeFormatNameStemAndTag;
- (unsigned long long)hash;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
@property(readonly, nonatomic) unsigned long long conditionCount;
- (id)customFormatWithNewName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;

@end

