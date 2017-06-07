//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerCore/DOCTagRegistryDelegate-Protocol.h>

@class DOCTagRegistryICloudDataSource, NSMutableOrderedSet, NSString;

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate>
{
    _Bool _inBatchUpdate;
    _Bool _shouldSynchronizeAfterBatchUpdate;
    NSMutableOrderedSet *_userTags;
    NSMutableOrderedSet *_discoveredTags;
    DOCTagRegistryICloudDataSource *_iCloudDataSource;
}

+ (id)sharedInstance;
@property(retain, nonatomic) DOCTagRegistryICloudDataSource *iCloudDataSource; // @synthesize iCloudDataSource=_iCloudDataSource;
@property(nonatomic) _Bool shouldSynchronizeAfterBatchUpdate; // @synthesize shouldSynchronizeAfterBatchUpdate=_shouldSynchronizeAfterBatchUpdate;
@property(retain, nonatomic) NSMutableOrderedSet *discoveredTags; // @synthesize discoveredTags=_discoveredTags;
@property(retain, nonatomic) NSMutableOrderedSet *userTags; // @synthesize userTags=_userTags;
@property(nonatomic) _Bool inBatchUpdate; // @synthesize inBatchUpdate=_inBatchUpdate;
- (void).cxx_destruct;
- (void)synchronize;
- (_Bool)moveTag:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)replaceTag:(id)arg1 withTag:(id)arg2;
- (_Bool)canReplaceTag:(id)arg1 withTag:(id)arg2;
- (id)_memberTag:(id)arg1;
- (id)tagForName:(id)arg1;
- (void)removeTags:(id)arg1;
- (id)_setForTagType:(long long)arg1;
- (_Bool)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)addTag:(id)arg1;
- (_Bool)isValidNewTagName:(id)arg1;
- (id)_tagNameForComparing:(id)arg1;
- (id)_sanitizedTagName:(id)arg1;
- (_Bool)_canAddTag:(id)arg1;
- (void)addTag:(id)arg1 options:(long long)arg2;
- (void)addTags:(id)arg1 options:(long long)arg2;
- (void)removeAllTagsOfType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

