//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class NSArray;

@interface VKLabelMarker : VKFeatureMarker
{
    shared_ptr_2d33c5e4 _labelMarker;
}

+ (id)markerWithLabelMarker:(const shared_ptr_2d33c5e4 *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)parentClusterLabelMarker;
- (_Bool)isClusterChild;
- (id)clusterFeatureAnnotations;
- (unsigned long long)clusterFeatureCount;
- (id)clusterContentBounds;
- (_Bool)isLeafCluster;
- (_Bool)isCluster;
- (id)debugAnchorPointString;
- (unsigned long long)elementCount;
- (int)sortKey;
- (unsigned long long)animationID;
- (unsigned char)pickedLabelBalloonBehavior;
- (int)selectionType;
- (_Bool)isLabelHitAtScreenPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (struct CGRect)screenCollisionBounds;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (void)setLabelPressed:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *shields;
@property(readonly, nonatomic) NSArray *imageKeys;
@property(readonly, nonatomic) NSArray *relatedSubTexts;
@property(readonly, nonatomic) NSArray *relatedTexts;
- (id)featureHandles;
- (id)featureAnnotation;
- (id)routeInfo;
- (id)trafficCamera;
- (id)incident;
- (id)featureTile;
- (int)featureType;
- (_Bool)positionOfInterest:(CDStruct_c3b9c2ee *)arg1 zoom:(float *)arg2;
- (unsigned char)venueComponentType;
- (short)venueFloorOrdinal;
- (unsigned long long)venueComponentID;
- (unsigned long long)venueLevelID;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueID;
- (unsigned long long)countFeatureIDs;
- (const unsigned long long *)featureIDs;
- (unsigned long long)businessID;
- (_Bool)hasBusinessID;
- (_Bool)isTransitLine;
- (_Bool)isTransit;
- (_Bool)isFlyoverTour;
- (_Bool)isVenueButton;
- (_Bool)isRouteEta;
- (_Bool)isTrafficCamera;
- (_Bool)isTrafficIncident;
- (_Bool)isOneWayArrow;
- (_Bool)isTextVisible;
- (_Bool)isVisible;
- (_Bool)isAlongSelectedTransitLine;
- (_Bool)isOnRoute;
@property(nonatomic) _Bool isDragged;
- (_Bool)isSelectable;
- (struct CGRect)calloutAnchorRect;
- (id)mapRegion;
- (Box_3d7e3c2c)_bounds;
- (CDStruct_c3b9c2ee)coordinate;
@property(readonly, nonatomic) NSArray *transitSystems;
@property(readonly, nonatomic) NSArray *iconImageKeys;
@property(readonly, nonatomic) NSArray *dataIconImageKeys;
- (id)subtext;
- (id)text;
- (const shared_ptr_2d33c5e4 *)labelMarkerImpl;
- (id)initWithFeatureMarkerPtr:(const shared_ptr_430519ce *)arg1;
- (id)initWithLabelMarkerPtr:(const shared_ptr_2d33c5e4 *)arg1;

@end

