//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLImageBlockArgument : MTLArgumentInternal
{
    unsigned long long _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    _Bool _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)setStructType:(id)arg1;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (_Bool)aliasImplicitImageBlock;
- (id)imageBlockMasterStructMembers;
- (unsigned long long)imageBlockDataSize;
- (unsigned long long)imageBlockKind;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 index:(unsigned long long)arg5 kind:(unsigned long long)arg6 dataSize:(unsigned int)arg7 masterStructMembers:(id)arg8 aliasImplicitImageBlock:(_Bool)arg9 aliasImplicitImageBlockRenderTarget:(unsigned int)arg10;

@end

