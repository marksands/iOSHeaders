//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDebugDescriptionProviding.h"
#import "BSDescriptionProviding.h"

@class BSUIMappedImageCacheOptions, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface BSUIMappedImageCache : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding>
{
    NSString *_path;
    NSString *_uniqueIdentifier;
    BSUIMappedImageCacheOptions *_options;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_keysToImagesOrFutures;
    NSMutableSet *_queue_allKeys;
}

- (void)_noteExternalChangeForKey:(id)arg1;
- (void)_warmupImageForKey:(id)arg1;
- (void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 andCPBitmapReadFlags:(int)arg4;
- (void)_setImage:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg3;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)removeAllImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (id)allKeys;
- (void)removeImageForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (id)imageForKey:(id)arg1;
- (void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 andCPBitmapReadFlags:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithUniqueIdentifier:(id)arg1 options:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

