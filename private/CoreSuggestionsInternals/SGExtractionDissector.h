//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSXPCConnection;

@interface SGExtractionDissector : SGPipelineDissector
{
    NSXPCConnection *_xpcConnection;
    id <SGReverseTemplateJS> _reverseTemplateJS;
}

+ (id)addressDictionaryToString:(id)arg1;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2 allowAlternatives:(_Bool)arg3;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)parseISO8601:(id)arg1;
- (void).cxx_destruct;
- (void)dissectURL:(id)arg1 title:(id)arg2 htmlPayload:(id)arg3 entity:(id)arg4;
- (_Bool)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2;
- (id)jsonLdOutputFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 extractionDate:(id)arg4;
- (id)jsonLdOutputFromEntity:(id)arg1;
- (id)jsonLdOutputFromPackedJSEntity:(id)arg1;
- (struct _PASTuple3 *)outputFromPackedJSEntity:(id)arg1 documentType:(unsigned long long)arg2 isDownloaded:(_Bool)arg3 forEntity:(id)arg4;
- (void)addEnrichmentsToEntityForOutputItems:(id)arg1 exceptions:(id)arg2 jsMessageLogs:(id)arg3 entity:(id)arg4 startTime:(unsigned long long)arg5;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)eventsFromSchemaOrgItems:(id)arg1;
- (_Bool)exceedsMaxHTMLContentLength:(unsigned long long)arg1;
- (_Bool)shouldIgnorePipelineEntity:(id)arg1;
- (id)packedJSEntityFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 creationTimestamp:(double)arg4;
- (id)packedJSEntityFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3;
- (id)packedEntityForJS:(id)arg1;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4;
- (id)init;

@end

