//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession *_SAPSession;
    _Bool _usesLocalNetworking;
}

@property(nonatomic) _Bool usesLocalNetworking; // @synthesize usesLocalNetworking=_usesLocalNetworking;
@property(retain, nonatomic) SSVFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

