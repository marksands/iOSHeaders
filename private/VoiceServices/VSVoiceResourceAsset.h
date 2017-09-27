//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceServices/VSAssetBase.h>

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding>
{
    float _rate;
    float _pitch;
    float _volume;
    NSArray *_languages;
    NSDictionary *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
    NSDictionary *_vocalizerConfig;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *vocalizerConfig; // @synthesize vocalizerConfig=_vocalizerConfig;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;
@property(copy, nonatomic) NSURL *searchPathURL; // @synthesize searchPathURL=_searchPathURL;
@property(copy, nonatomic) NSDictionary *resourceList; // @synthesize resourceList=_resourceList;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (void)syncWithConfigFile:(id)arg1;
- (id)key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

