//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface UNSecurityScopedURL : NSURL
{
    NSString *_sandboxExtensionClass;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_issueSandboxExtension;
- (_Bool)_allowsDirectEncoding;
- (id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2;

@end

