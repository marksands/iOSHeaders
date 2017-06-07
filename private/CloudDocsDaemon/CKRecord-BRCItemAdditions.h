//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <CloudDocsDaemon/PQLBindable-Protocol.h>

@class NSString;

@interface CKRecord (BRCItemAdditions) <PQLBindable>
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
- (void)sanitizeShortTokenFields;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (_Bool)brc_currentUserOwnsLastEditorDevice;
- (id)brc_lastEditorDeviceName;
- (_Bool)brc_safeToGetURL;
- (id)brc_updateDroppedReason;
- (id)brc_oplockMergeEtag;
- (_Bool)brc_isInterestingRecordForSyncDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

