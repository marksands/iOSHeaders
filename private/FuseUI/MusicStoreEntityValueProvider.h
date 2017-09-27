//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MusicEntityValueProviding.h"

@class MPUContentItemIdentifierCollection, MusicStoreItemMetadataContext, NSString;

@interface MusicStoreEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    id <MusicEntityProviding> _childrenEntityProvider;
    MusicStoreItemMetadataContext *_storeItemMetadataContext;
}

+ (CDUnknownBlockType)_entityValueHandlerForProperty:(id)arg1;
+ (void)_registerEntityValueHandler:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
+ (long long)entityType;
+ (void)initialize;
@property(readonly, nonatomic) MusicStoreItemMetadataContext *storeItemMetadataContext; // @synthesize storeItemMetadataContext=_storeItemMetadataContext;
@property(retain, nonatomic) id <MusicEntityProviding> childrenEntityProvider; // @synthesize childrenEntityProvider=_childrenEntityProvider;
- (void).cxx_destruct;
- (Class)_requiredClassForEquality;
@property(readonly, copy, nonatomic) MPUContentItemIdentifierCollection *contentItemIdentifierCollection;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithStoreItemMetadataContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

