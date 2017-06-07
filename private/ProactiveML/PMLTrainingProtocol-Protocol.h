//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, PMLModelHandle, PMLSessionDescriptor, PMLSparseVector, PMLSpotlightReference;

@protocol PMLTrainingProtocol <NSObject>
- (_Bool)modelServerUpdateWithPayload:(NSData *)arg1 error:(id *)arg2;
- (NSDictionary *)planReceivedWithPayload:(NSData *)arg1 error:(id *)arg2;
- (void)trimDb;
- (void)trainWhile:(_Bool (^)(void))arg1;
- (void)updateSessionsAndLabelForModel:(PMLSessionDescriptor *)arg1 block:(void (^)(long long, NSData *, void (^)(long long, PMLSparseVector *)))arg2;
- (void)deleteSessionsWithBundleID:(NSString *)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSessionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 source:(NSData *)arg2 label:(long long)arg3 model:(PMLModelHandle *)arg4 spotlightReference:(PMLSpotlightReference *)arg5 isInternal:(_Bool)arg6;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 model:(PMLModelHandle *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(_Bool)arg5;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 sessionDescriptor:(PMLSessionDescriptor *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(_Bool)arg5;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 source:(NSData *)arg2 label:(long long)arg3 sessionDescriptor:(PMLSessionDescriptor *)arg4 spotlightReference:(PMLSpotlightReference *)arg5 isInternal:(_Bool)arg6;
@end

