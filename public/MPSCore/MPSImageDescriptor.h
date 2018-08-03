//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MPSImageDescriptor : NSObject <NSCopying>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _numberOfImages;
    unsigned long long _channelFormat;
    unsigned long long _cacheMode;
    unsigned long long _storageMode;
    unsigned long long _usage;
    unsigned long long _featureChannelsLayout;
    unsigned long long _cpuCacheMode;
}

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
@property(nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property(nonatomic) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(nonatomic) unsigned long long channelFormat; // @synthesize channelFormat=_channelFormat;
@property(nonatomic) unsigned long long numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property(nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(nonatomic) unsigned long long featureChannels; // @synthesize featureChannels=_featureChannels;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newTextureDescriptor;
- (id)init;
@property(readonly, nonatomic) unsigned long long pixelFormat;

@end

