//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPTracklistEntry.h>

#import "MPTracklistEnumerationTrackingEntry.h"

@class MPTracklistItemEntry, NSMutableDictionary, NSString;

@interface MPTracklistHeadEntry : MPTracklistEntry <MPTracklistEnumerationTrackingEntry>
{
    NSMutableDictionary *_identifiersItemEntryMap;
    MPTracklistItemEntry *_lastItemEntry;
}

+ (id)headEntryWithSectionIdentifier:(id)arg1;
@property(retain, nonatomic) MPTracklistItemEntry *lastItemEntry; // @synthesize lastItemEntry=_lastItemEntry;
@property(readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap; // @synthesize identifiersItemEntryMap=_identifiersItemEntryMap;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long entryType;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

