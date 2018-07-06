//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMapTable, NSMutableSet, NSSet;

@interface PGTextFeatureGenerator : NSObject
{
    NSSet *_momentNodes;
    NSMutableSet *_momentIdentifiers;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfAssets;
    NSMapTable *_numberOfAssetsBySceneNode;
    NSCountedSet *_sceneNodes;
    NSCountedSet *_personNodes;
    NSCountedSet *_roiNodes;
    NSCountedSet *_poiNodes;
    NSCountedSet *_meaningNodes;
    NSCountedSet *_districtNodes;
    NSCountedSet *_cityNodes;
    NSCountedSet *_stateNodes;
    NSCountedSet *_countryNodes;
    NSCountedSet *_areaNodes;
    NSCountedSet *_businessNodes;
    NSCountedSet *_businessCategoryNodes;
    NSCountedSet *_holidayNodes;
    NSCountedSet *_publicEventNodes;
    NSCountedSet *_publicEventPerformerNodes;
    NSCountedSet *_publicEventCategoryNodes;
}

@property(retain, nonatomic) NSCountedSet *publicEventCategoryNodes; // @synthesize publicEventCategoryNodes=_publicEventCategoryNodes;
@property(retain, nonatomic) NSCountedSet *publicEventPerformerNodes; // @synthesize publicEventPerformerNodes=_publicEventPerformerNodes;
@property(retain, nonatomic) NSCountedSet *publicEventNodes; // @synthesize publicEventNodes=_publicEventNodes;
@property(retain, nonatomic) NSCountedSet *holidayNodes; // @synthesize holidayNodes=_holidayNodes;
@property(retain, nonatomic) NSCountedSet *businessCategoryNodes; // @synthesize businessCategoryNodes=_businessCategoryNodes;
@property(retain, nonatomic) NSCountedSet *businessNodes; // @synthesize businessNodes=_businessNodes;
@property(retain, nonatomic) NSCountedSet *areaNodes; // @synthesize areaNodes=_areaNodes;
@property(retain, nonatomic) NSCountedSet *countryNodes; // @synthesize countryNodes=_countryNodes;
@property(retain, nonatomic) NSCountedSet *stateNodes; // @synthesize stateNodes=_stateNodes;
@property(retain, nonatomic) NSCountedSet *cityNodes; // @synthesize cityNodes=_cityNodes;
@property(retain, nonatomic) NSCountedSet *districtNodes; // @synthesize districtNodes=_districtNodes;
@property(retain, nonatomic) NSCountedSet *meaningNodes; // @synthesize meaningNodes=_meaningNodes;
@property(retain, nonatomic) NSCountedSet *poiNodes; // @synthesize poiNodes=_poiNodes;
@property(retain, nonatomic) NSCountedSet *roiNodes; // @synthesize roiNodes=_roiNodes;
@property(retain, nonatomic) NSCountedSet *personNodes; // @synthesize personNodes=_personNodes;
@property(retain, nonatomic) NSCountedSet *sceneNodes; // @synthesize sceneNodes=_sceneNodes;
@property(retain, nonatomic) NSMapTable *numberOfAssetsBySceneNode; // @synthesize numberOfAssetsBySceneNode=_numberOfAssetsBySceneNode;
@property(nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(retain, nonatomic) NSMutableSet *momentIdentifiers; // @synthesize momentIdentifiers=_momentIdentifiers;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (void).cxx_destruct;
- (id)sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg1;
- (id)_textFeatureForPersonNode:(id)arg1 weight:(float)arg2;
- (id)_textFeaturesForNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;
- (id)bestTextFeaturesFromTextFeatures:(id)arg1;
- (id)generateTextFeatures;
- (void)analyzeMomentNodes;
- (id)naturalLanguageFeatures;
- (id)loadRequirements;
- (_Bool)boundTextFeaturesPerEvent;
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
- (void)_resetProperties;
- (id)initWithMomentNodes:(id)arg1;

@end

