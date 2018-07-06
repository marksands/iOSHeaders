//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PKExtendedTraitCollection;

@interface PXPlacesSnapshotOptions : NSObject
{
    _Bool _shouldSkipPlaceholder;
    _Bool _showsPointLabels;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_cacheDirectoryPath;
    double _visibleDistance;
    unsigned long long _snapshotMapType;
    struct CGSize _viewSize;
}

@property(nonatomic) _Bool showsPointLabels; // @synthesize showsPointLabels=_showsPointLabels;
@property(nonatomic) _Bool shouldSkipPlaceholder; // @synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) unsigned long long snapshotMapType; // @synthesize snapshotMapType=_snapshotMapType;
@property(nonatomic) double visibleDistance; // @synthesize visibleDistance=_visibleDistance;
@property(retain, nonatomic) NSString *cacheDirectoryPath; // @synthesize cacheDirectoryPath=_cacheDirectoryPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate; // @synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate;
@property(retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
- (void).cxx_destruct;
- (id)init;

@end

