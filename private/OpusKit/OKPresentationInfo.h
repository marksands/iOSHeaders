//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSRecursiveLock, NSString, OKPresentation, UIColor;

@interface OKPresentationInfo : NSObject
{
    OKPresentation *_presentation;
    NSRecursiveLock *_infoLock;
    NSString *_uuid;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSString *_versionID;
    unsigned long long _format;
    unsigned long long _formatVersion;
    double _apiVersion;
    NSString *_producerIdentifier;
    double _producerVersion;
    _Bool _requiresProducer;
    NSMutableArray *_resolutions;
    _Bool _couchPotatoSupported;
    double _couchPotatoDelay;
    _Bool _motionSupported;
    _Bool _wheelControllerSupported;
    _Bool _overviewSupported;
    _Bool _trailerSupported;
    NSString *_trailerNavigatorName;
    NSString *_mainNavigatorName;
    NSString *_mainFeederName;
    UIColor *backgroundColor;
    _Bool _renderTimeLoggingSupported;
    double _couchPotatoStepDuration;
    UIColor *_backgroundColor;
}

@property _Bool renderTimeLoggingSupported; // @synthesize renderTimeLoggingSupported=_renderTimeLoggingSupported;
@property _Bool overviewSupported; // @synthesize overviewSupported=_overviewSupported;
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property _Bool trailerSupported; // @synthesize trailerSupported=_trailerSupported;
@property _Bool wheelControllerSupported; // @synthesize wheelControllerSupported=_wheelControllerSupported;
@property _Bool motionSupported; // @synthesize motionSupported=_motionSupported;
@property _Bool couchPotatoSupported; // @synthesize couchPotatoSupported=_couchPotatoSupported;
@property _Bool requiresProducer; // @synthesize requiresProducer=_requiresProducer;
@property double producerVersion; // @synthesize producerVersion=_producerVersion;
@property(copy) NSString *producerIdentifier; // @synthesize producerIdentifier=_producerIdentifier;
@property double apiVersion; // @synthesize apiVersion=_apiVersion;
@property unsigned long long formatVersion; // @synthesize formatVersion=_formatVersion;
@property(copy) NSString *versionID; // @synthesize versionID=_versionID;
@property(copy) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
- (id)dictionary;
- (void)importFromDictionary:(id)arg1;
- (void)reset;
- (void)unlock;
- (void)lock;
@property(copy) NSString *mainFeederName; // @synthesize mainFeederName=_mainFeederName;
@property(copy) NSString *mainNavigatorName; // @synthesize mainNavigatorName=_mainNavigatorName;
@property(copy) NSString *trailerNavigatorName; // @synthesize trailerNavigatorName=_trailerNavigatorName;
@property double couchPotatoDelay; // @synthesize couchPotatoDelay=_couchPotatoDelay;
@property double couchPotatoStepDuration; // @synthesize couchPotatoStepDuration=_couchPotatoStepDuration;
@property(copy) NSArray *resolutions; // @synthesize resolutions=_resolutions;
@property unsigned long long format; // @synthesize format=_format;
@property(nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
- (void)dealloc;
- (id)init;

@end

