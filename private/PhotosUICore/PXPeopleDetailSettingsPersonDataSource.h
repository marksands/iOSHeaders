//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXPeopleDetailSettingsDataSource.h"

@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsPersonDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    PHFetchResult *_persons;
}

@property(retain, nonatomic) PHFetchResult *persons; // @synthesize persons=_persons;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)modelObjectForIndex:(long long)arg1;
@property(readonly, nonatomic) long long action;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (unsigned long long)faceCount:(long long)arg1;
- (id)personNameAtIndex:(long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) _Bool hasMoreDetails;
- (id)initWithTitle:(id)arg1 persons:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

