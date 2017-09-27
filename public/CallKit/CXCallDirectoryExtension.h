//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class LSPlugInKitProxy, NSString;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>
{
    _Bool _onlyExtensionInContainingApp;
    NSString *_identifier;
    long long _state;
    long long _priority;
    NSString *_localizedName;
    NSString *_localizedContainingAppName;
    LSPlugInKitProxy *_plugInKitProxy;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isOnlyExtensionInContainingApp) _Bool onlyExtensionInContainingApp; // @synthesize onlyExtensionInContainingApp=_onlyExtensionInContainingApp;
@property(retain, nonatomic) LSPlugInKitProxy *plugInKitProxy; // @synthesize plugInKitProxy=_plugInKitProxy;
@property(copy, nonatomic) NSString *localizedContainingAppName; // @synthesize localizedContainingAppName=_localizedContainingAppName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

