//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject
{
    NSMapTable *_tokenToRequestToken;
    WBSSiteMetadataManager *_manager;
    long long _priority;
    struct CGSize _size;
}

+ (id)new;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) WBSSiteMetadataManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)_issueRequest:(id)arg1 isOneTime:(_Bool)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelAllRegistrations;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithSiteMetadataManager:(id)arg1;
- (id)init;

@end

