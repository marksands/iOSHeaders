//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, SCNScene;

@protocol SCNSceneSourceJSExport <JSExport>
+ (id)sceneSourceWithData:(NSData *)arg1 options:(NSDictionary *)arg2;
+ (id)sceneSourceWithURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
@property(readonly) NSData *data;
@property(readonly) NSURL *url;
- (NSArray *)entriesPassingTest:(_Bool (^)(id, NSString *, _Bool *))arg1;
- (NSArray *)identifiersOfEntriesWithClass:(Class)arg1;
- (id)entryWithIdentifier:(NSString *)arg1 withClass:(Class)arg2;
- (id)propertyForKey:(NSString *)arg1;
- (SCNScene *)sceneWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (SCNScene *)sceneWithOptions:(NSDictionary *)arg1 statusHandler:(void (^)(float, long long, NSError *, _Bool *))arg2;
@end

