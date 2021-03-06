/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding> {
    int  _failureReason;
    BOOL  _hasCellularSettingsRemediation;
    BOOL  _hasDateAndTimeSettingsRemediation;
    BOOL  _hasLocationSettingsRemediation;
    BOOL  _hasWiFiSettingsRemediation;
    NSString * _message;
    int  _providerEndedReason;
    int  _providerErrorCode;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL hasCellularSettingsRemediation;
@property (nonatomic) BOOL hasDateAndTimeSettingsRemediation;
@property (nonatomic) BOOL hasLocationSettingsRemediation;
@property (nonatomic) BOOL hasWiFiSettingsRemediation;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) int providerEndedReason;
@property (nonatomic) int providerErrorCode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)failureReason;
- (BOOL)hasCellularSettingsRemediation;
- (BOOL)hasDateAndTimeSettingsRemediation;
- (BOOL)hasLocationSettingsRemediation;
- (BOOL)hasWiFiSettingsRemediation;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (int)providerEndedReason;
- (int)providerErrorCode;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasCellularSettingsRemediation:(BOOL)arg1;
- (void)setHasDateAndTimeSettingsRemediation:(BOOL)arg1;
- (void)setHasLocationSettingsRemediation:(BOOL)arg1;
- (void)setHasWiFiSettingsRemediation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setProviderEndedReason:(int)arg1;
- (void)setProviderErrorCode:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
