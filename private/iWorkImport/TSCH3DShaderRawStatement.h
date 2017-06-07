//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DShaderStatement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement>
{
    NSString *mString;
    struct TSCH3DShaderType mLinkageType;
}

+ (id)statementWithString:(id)arg1 linkageType:(struct TSCH3DShaderType)arg2;
@property(nonatomic) struct TSCH3DShaderType linkageType; // @synthesize linkageType=mLinkageType;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (id).cxx_construct;
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg1;
- (_Bool)isLinked;
- (id)resolve;
- (void)dealloc;
- (id)initWithString:(id)arg1 linkageType:(struct TSCH3DShaderType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
