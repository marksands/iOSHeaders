//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPSearchResultForFeedback.h"

@class NSData, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@interface _CPSearchResultForFeedback : PBCodable <_CPSearchResultForFeedback, NSSecureCoding>
{
    _Bool _isStaticCorrection;
    _Bool _isLocalApplicationResult;
    _Bool _publiclyIndexable;
    _Bool _isFuzzyMatch;
    _Bool _doNotFold;
    int _topHit;
    int _type;
    int _knownResultBundleId;
    int _knownSectionBundleIdentifier;
    int _knownApplicationBundleIdentifier;
    NSString *_identifier;
    _CPActionItemForFeedback *_action;
    _CPPunchoutForFeedback *_punchout;
    NSString *_srf;
    _CPStruct *_localFeatures;
    NSString *_resultType;
    double _rankingScore;
    unsigned long long _queryId;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
    NSString *_fbr;
    NSString *_userInput;
    unsigned long long _blockId;
    unsigned long long _hashedIdentifier;
    NSString *_resultBundleId;
    NSString *_sectionBundleIdentifier;
    NSString *_applicationBundleIdentifier;
    unsigned long long _whichResultbundleidentifier;
    unsigned long long _whichSectionbundleid;
    unsigned long long _whichApplicationbundleid;
}

@property(readonly, nonatomic) unsigned long long whichApplicationbundleid; // @synthesize whichApplicationbundleid=_whichApplicationbundleid;
@property(readonly, nonatomic) unsigned long long whichSectionbundleid; // @synthesize whichSectionbundleid=_whichSectionbundleid;
@property(readonly, nonatomic) unsigned long long whichResultbundleidentifier; // @synthesize whichResultbundleidentifier=_whichResultbundleidentifier;
@property(nonatomic) unsigned long long hashedIdentifier; // @synthesize hashedIdentifier=_hashedIdentifier;
@property(nonatomic) unsigned long long blockId; // @synthesize blockId=_blockId;
@property(nonatomic) _Bool doNotFold; // @synthesize doNotFold=_doNotFold;
@property(nonatomic) _Bool isFuzzyMatch; // @synthesize isFuzzyMatch=_isFuzzyMatch;
@property(copy, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) _Bool publiclyIndexable; // @synthesize publiclyIndexable=_publiclyIndexable;
@property(nonatomic) _Bool isLocalApplicationResult; // @synthesize isLocalApplicationResult=_isLocalApplicationResult;
@property(copy, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(copy, nonatomic) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery; // @synthesize intendedQuery=_intendedQuery;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) _Bool isStaticCorrection; // @synthesize isStaticCorrection=_isStaticCorrection;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(copy, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) _CPStruct *localFeatures; // @synthesize localFeatures=_localFeatures;
@property(copy, nonatomic) NSString *srf; // @synthesize srf=_srf;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout; // @synthesize punchout=_punchout;
@property(retain, nonatomic) _CPActionItemForFeedback *action; // @synthesize action=_action;
@property(nonatomic) int topHit; // @synthesize topHit=_topHit;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) int knownApplicationBundleIdentifier; // @synthesize knownApplicationBundleIdentifier=_knownApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(nonatomic) int knownSectionBundleIdentifier; // @synthesize knownSectionBundleIdentifier=_knownSectionBundleIdentifier;
@property(copy, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(nonatomic) int knownResultBundleId; // @synthesize knownResultBundleId=_knownResultBundleId;
@property(copy, nonatomic) NSString *resultBundleId; // @synthesize resultBundleId=_resultBundleId;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;
@property(readonly, copy, nonatomic) id <NSCopying> jsonIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

