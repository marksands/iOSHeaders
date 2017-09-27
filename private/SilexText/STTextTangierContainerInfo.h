//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDContainerInfo.h"

#import "STTangierRepDirectLayerHostingInfo.h"

@class NSSet, NSString, STTextTangierStorage;

@interface STTextTangierContainerInfo : TSDContainerInfo <STTangierRepDirectLayerHostingInfo>
{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    STTextTangierStorage *_storage;
    NSSet *_fixedExclusionPaths;
    id <TSDRepDirectLayerHosting> _directLayerHost;
}

@property(nonatomic) __weak id <TSDRepDirectLayerHosting> directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property(nonatomic) _Bool shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSSet *fixedExclusionPaths; // @synthesize fixedExclusionPaths=_fixedExclusionPaths;
@property(readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *rangedExclusionPaths;
- (Class)repClass;
- (Class)layoutClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

