from setuptools import find_packages
from setuptools import setup

setup(
    name='dms_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('dms_interfaces', 'dms_interfaces.*')),
)
