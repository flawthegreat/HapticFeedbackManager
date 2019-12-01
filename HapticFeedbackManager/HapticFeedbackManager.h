@import Foundation;

FOUNDATION_EXPORT double HapticFeedbackManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char HapticFeedbackManagerVersionString[];

NS_ASSUME_NONNULL_BEGIN

CF_EXPORT CFTypeRef MTActuatorCreateFromDeviceID(UInt64 deviceID);
CF_EXPORT IOReturn MTActuatorOpen(CFTypeRef actuatorRef);
CF_EXPORT IOReturn MTActuatorClose(CFTypeRef actuatorRef);
CF_EXPORT IOReturn MTActuatorActuate(CFTypeRef actuatorRef, SInt32 actuationID, UInt32 arg1, Float32 arg2, Float32 arg3);
CF_EXPORT bool MTActuatorIsOpen(CFTypeRef actuatorRef);

NS_ASSUME_NONNULL_END
