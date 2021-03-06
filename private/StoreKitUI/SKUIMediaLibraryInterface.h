//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUILibraryInterface.h"

@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>
{
}

- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_newDefaultQuery;
- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (void)removeMediaItemsForLibraryItems:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;
- (_Bool)isItemLocalAudiobook:(id)arg1;
- (_Bool)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

