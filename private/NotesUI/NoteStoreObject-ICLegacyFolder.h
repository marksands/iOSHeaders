//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/NoteStoreObject.h>

#import <NotesUI/ICLegacyFolder-Protocol.h>

@class NSString;

@interface NoteStoreObject (ICLegacyFolder) <ICLegacyFolder>
- (void)addNotesObject:(id)arg1;
- (id)newNoteInContext:(struct NoteContext *)arg1;
- (id)parentFolder;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

