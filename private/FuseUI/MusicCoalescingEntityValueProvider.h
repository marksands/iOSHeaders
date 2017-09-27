//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MusicEntityValueProviding.h"

@class MusicEntityViewContentDescriptor, NSDictionary, NSSet, NSString;

@interface MusicCoalescingEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    NSDictionary *_cachedPropertyValuesLoadedAsynchronously;
    NSDictionary *_cachedPropertyValuesLoadedSynchronously;
    NSSet *_propertiesToLoadAsynchronously;
    NSSet *_propertiesToPrefetchSynchronously;
    NSSet *_additionalPropertiesToPrefetchSynchronously;
    id <MusicEntityValueProviding> _baseEntityValueProvider;
    MusicEntityViewContentDescriptor *_contentDescriptor;
}

@property(readonly, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor; // @synthesize contentDescriptor=_contentDescriptor;
@property(readonly, nonatomic) id <MusicEntityValueProviding> baseEntityValueProvider; // @synthesize baseEntityValueProvider=_baseEntityValueProvider;
@property(copy, nonatomic) NSSet *additionalPropertiesToPrefetchSynchronously; // @synthesize additionalPropertiesToPrefetchSynchronously=_additionalPropertiesToPrefetchSynchronously;
- (void).cxx_destruct;
- (void)_updatePropertiesToLoadAndPrefetch;
- (void)_updateWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (void)_invalidateCachedPropertyValuesLoadedSynchronously;
- (void)_invalidateCachedPropertyValuesLoadedAsynchronously;
- (id)_cachedPropertyValuesLoadedSynchronously;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)updateWithAsynchronouslyLoadedPropertyValues:(id)arg1;
- (void)reset;
- (void)reloadWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

