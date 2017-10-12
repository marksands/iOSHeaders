//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface SXEmbedController : NSObject
{
    id <SXEmbedDataSource> _embedDataSource;
    NSURLSession *_oEmbedSession;
}

@property(retain, nonatomic) NSURLSession *oEmbedSession; // @synthesize oEmbedSession=_oEmbedSession;
@property(retain, nonatomic) id <SXEmbedDataSource> embedDataSource; // @synthesize embedDataSource=_embedDataSource;
- (void).cxx_destruct;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;
- (id)additionalQueryParametersForType:(id)arg1;
- (void)retrieveHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
