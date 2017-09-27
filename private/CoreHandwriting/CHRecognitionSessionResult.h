//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CHStrokeGroupingResult, NSArray, NSDictionary, NSString;

@interface CHRecognitionSessionResult : NSObject <NSCopying>
{
    id <CHStrokeProviderVersion> _strokeProviderVersion;
    NSArray *_locales;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *__recognitionResultsByGroupID;
    CDStruct_a0ca6847 _generationDuration;
}

@property(readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID; // @synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID;
@property(readonly, nonatomic) CDStruct_a0ca6847 generationDuration; // @synthesize generationDuration=_generationDuration;
@property(readonly, retain, nonatomic) CHStrokeGroupingResult *strokeGroupingResult; // @synthesize strokeGroupingResult=_strokeGroupingResult;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, retain, nonatomic) id <CHStrokeProviderVersion> strokeProviderVersion; // @synthesize strokeProviderVersion=_strokeProviderVersion;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(CDUnknownBlockType)arg2;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;
@property(readonly, nonatomic) NSString *allResultsDebugDescription;
@property(readonly, nonatomic) NSString *highConfidenceDebugDescription;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeProviderVersion:(id)arg1 locales:(id)arg2 strokeGroupingResult:(id)arg3 recognitionResults:(id)arg4 generationDuration:(CDStruct_a0ca6847)arg5;
- (id)init;

@end

