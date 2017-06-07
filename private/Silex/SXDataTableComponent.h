//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponent.h>

@class NSString, SXDataRecordStore, SXJSONArray;

@interface SXDataTableComponent : SXComponent
{
}

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
- (id)descriptorForKey:(id)arg1;
- (long long)compareSelector:(id)arg1 withOtherSelector:(id)arg2;
- (id)sortStylesMatchesBySelectorWeight:(id)arg1;
- (id)filterDuplicateSequentialStyles:(id)arg1;
- (id)styleByMergingStyleMatches:(id)arg1 forBaseStyle:(id)arg2;
- (unsigned long long)isEvenNumber:(long long)arg1;
- (unsigned long long)isOddNumber:(long long)arg1;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1 usingBaseStyle:(id)arg2;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)rowStyleForRowIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1 forTableStyle:(id)arg2;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 forTableStyle:(id)arg2;
- (id)rowStyleForRowIndex:(unsigned long long)arg1 forTableStyle:(id)arg2;
- (id)headerCellStyleForIndexPath:(CDStruct_2fea82da)arg1 forTableStyle:(id)arg2;
- (id)headerColumnStyleForTableStyle:(id)arg1;
- (id)headerRowStyleForTableStyle:(id)arg1;
- (_Bool)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXDataRecordStore *data; // @dynamic data;
@property(readonly, nonatomic) unsigned long long dataOrientation; // @dynamic dataOrientation;
@property(readonly, nonatomic) _Bool showDescriptorLabels; // @dynamic showDescriptorLabels;
@property(readonly, nonatomic) SXJSONArray *sortBy; // @dynamic sortBy;
@property(readonly, nonatomic) NSString *tableStyle; // @dynamic tableStyle;

@end

