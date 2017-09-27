//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CLSArchiveRoom, CLSClueCollection, CLSInspector, CLSInvestigationFeeder, NSArray, NSMutableArray, NSMutableDictionary, NSString, PIGroup;

@interface CLSInvestigation : NSObject <NSCoding>
{
    NSString *_uuid;
    unsigned long long _priority;
    id _context;
    PIGroup *_group;
    long long _qualityOfService;
    CLSInvestigationFeeder *_feeder;
    id <CLSInvestigationDelegate> _delegate;
    id <CLSInvestigationInterviewDelegate> _interviewDelegate;
    NSMutableArray *_profiles;
    CDUnknownBlockType _completionBlock;
    CLSInspector *_inspector;
    CLSClueCollection *_clueCollection;
    unsigned long long _precision;
    unsigned long long _state;
    _Bool _isCancelled;
    NSArray *_informants;
    NSMutableDictionary *_tracesLogsByURIs;
    NSMutableArray *_tracesLogsURIs;
    double _executionTime;
    double _wallTime;
    _Bool _enableDebuggingClues;
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateDidEnd:1;
        unsigned int delegateNumberOfItems:1;
        unsigned int delegateSampleOfItems:1;
        unsigned int delegateItemThumbnailAtIndexWithResolution:1;
        unsigned int delegateItemMetadataWithKeysAtIndex:1;
    } _investigationFlags;
    CLSArchiveRoom *_archiveRoom;
}

+ (id)investigationAtPath:(id)arg1;
+ (id)investigationsDirectory;
+ (_Bool)supportsSecureCoding;
+ (id)investigationWithProfiles:(id)arg1 clueDates:(id)arg2 clueLocations:(id)arg3 cluePeoples:(id)arg4;
+ (id)investigationWithProfiles:(id)arg1;
@property _Bool enableDebuggingClues; // @synthesize enableDebuggingClues=_enableDebuggingClues;
@property unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(readonly, retain) CLSClueCollection *clueCollection; // @synthesize clueCollection=_clueCollection;
@property(retain, nonatomic) CLSArchiveRoom *archiveRoom; // @synthesize archiveRoom=_archiveRoom;
@property(readonly, nonatomic) __weak CLSInspector *inspector; // @synthesize inspector=_inspector;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <CLSInvestigationInterviewDelegate> interviewDelegate; // @synthesize interviewDelegate=_interviewDelegate;
@property(nonatomic) __weak id <CLSInvestigationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(readonly, retain, nonatomic) CLSInvestigationFeeder *feeder; // @synthesize feeder=_feeder;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, retain) PIGroup *group; // @synthesize group=_group;
@property unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)tracesDescription;
- (id)_traceStringForType:(unsigned long long)arg1;
- (void)addTraceFromObject:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 withDescriptionFormat:(id)arg5;
- (id)itemMetadataWithKeys:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (id)sampleOfItems;
- (unsigned long long)numberOfItems;
- (void)cancel:(CDUnknownBlockType)arg1;
- (double)wallTime;
- (double)executionTime;
@property(getter=isSuspended) _Bool suspended;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly) _Bool isExecuting;
- (void)waitUntilFinished;
- (void)_didEndInvestigation:(_Bool)arg1;
- (void)_addOperations:(id)arg1;
- (void)_willBeginInvestigation:(id)arg1;
- (id)saveToDisk;
- (_Bool)saveToPath:(id)arg1;
- (id)saveToDirectory:(id)arg1;
- (id)investigationsDirectory;
- (id)description:(_Bool)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;
- (id)init;
- (id)initWithFeeder:(id)arg1 profiles:(id)arg2;
- (id)initWithClueCollection:(id)arg1 profiles:(id)arg2;

@end

