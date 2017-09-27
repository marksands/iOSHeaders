//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol
{
    FCCKContentFetchOperation *_fetchOperation;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)excerptURLForArticleID:(id)arg1 changeTag:(id)arg2;
+ (void)unregister;
+ (void)setupWithArticleDatabase:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) FCCKContentFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end

