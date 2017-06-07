//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString, NSURL, NSURLSession;
@protocol DESRecipeEvaluation, OS_dispatch_queue;

@interface DESEvaluationSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_recordType;
    NSString *_localeIdentifier;
    NSURL *_baseURL;
    NSURL *_postbackBaseURL;
    NSDictionary *_records;
    id <DESRecipeEvaluation> _evaluator;
    CDUnknownBlockType _dataFetchBlock;
    _Bool _skipPolicy;
    NSURLSession *_session;
}

+ (void)initialize;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)invalidate;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendRecipeResponseForRecipeId:(id)arg1 result:(id)arg2 parametersUsed:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_downloadAttachments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 recordUUID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchRecipe:(id)arg1 recordUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleTelemetry:(id)arg1;
- (void)_fetchPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 protocolClass:(Class)arg6 dataFetchBlock:(CDUnknownBlockType)arg7;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 dataFetchBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

