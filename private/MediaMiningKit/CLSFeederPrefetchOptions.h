//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSFeederPrefetchOptions : NSObject
{
    unsigned long long _personCountPrefetchMode;
    unsigned long long _personsPrefetchMode;
    unsigned long long _scenesPrefetchMode;
    unsigned long long _mediaAnalysesPrefetchMode;
    unsigned long long _faceInformationPrefetchMode;
    unsigned long long _locationPrefetchMode;
}

+ (id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1;
@property(nonatomic) unsigned long long locationPrefetchMode; // @synthesize locationPrefetchMode=_locationPrefetchMode;
@property(nonatomic) unsigned long long faceInformationPrefetchMode; // @synthesize faceInformationPrefetchMode=_faceInformationPrefetchMode;
@property(nonatomic) unsigned long long mediaAnalysesPrefetchMode; // @synthesize mediaAnalysesPrefetchMode=_mediaAnalysesPrefetchMode;
@property(nonatomic) unsigned long long scenesPrefetchMode; // @synthesize scenesPrefetchMode=_scenesPrefetchMode;
@property(nonatomic) unsigned long long personsPrefetchMode; // @synthesize personsPrefetchMode=_personsPrefetchMode;
@property(nonatomic) unsigned long long personCountPrefetchMode; // @synthesize personCountPrefetchMode=_personCountPrefetchMode;
- (id)init;

@end

