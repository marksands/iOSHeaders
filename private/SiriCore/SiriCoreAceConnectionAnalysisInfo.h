//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSURL, SiriCoreConnectionType;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject
{
    _Bool _wwanPreferred;
    int _interfaceIndex;
    NSURL *_connectionURL;
    NSNumber *_sendBufferSize;
    SiriCoreConnectionType *_connectionType;
    NSString *_policyId;
}

@property(copy, nonatomic) NSString *policyId; // @synthesize policyId=_policyId;
@property(readonly, nonatomic) SiriCoreConnectionType *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) _Bool wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;
@property(readonly, copy, nonatomic) NSNumber *sendBufferSize; // @synthesize sendBufferSize=_sendBufferSize;
@property(readonly, nonatomic) int interfaceIndex; // @synthesize interfaceIndex=_interfaceIndex;
@property(readonly, nonatomic) NSURL *connectionURL; // @synthesize connectionURL=_connectionURL;
- (void).cxx_destruct;
- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(_Bool)arg4 connectionType:(id)arg5 policyId:(id)arg6;

@end

