//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString;

@interface WLKCanonicalPlayablesRequestOperation : WLKNetworkRequestOperation
{
    NSString *_canonicalID;
}

@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void).cxx_destruct;
- (id)responseProcessor;
- (id)initWithCanonicalID:(id)arg1 profiles:(id)arg2;

@end

